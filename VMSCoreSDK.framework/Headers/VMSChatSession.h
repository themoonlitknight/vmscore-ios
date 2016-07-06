//
//  VMSChatSession.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 19/10/15.
//  Copyright © 2015 vms.me. All rights reserved.
//

#import "VMSEntity.h"
#import "VMSTypes.h"
#import "VMSQuery.h"

@class VMSActor;
@class VMSMessage;
@class VMSMessageExtra;
@class VMSMessageContext;
@class VMSChatStateInfo;

/**
 *  The 'VMSChatSession' class models a conversation with another entity.
 */
@interface VMSChatSession : VMSEntity


///--------------
/// @name Content
///--------------

/**
 *  The type of the chat session.
 */
@property (nonatomic, readonly) VMSChatSessionType sessionType /*VMS_QUERYABLE*/;

/**
 *  The actor the conversation is open with. It can be an instance of 'VMSContact', 'VMSGroup', 'VMSContactSpecial'.
 */
@property (nonatomic, readonly) VMSActor *actor /*VMS_QUERYABLE*/;

/**
 *  The last message in the conversation.
 */
@property (nonatomic, readonly) VMSMessage *lastMessage /*VMS_QUERYABLE*/;

///---------------
/// @name Creation
///---------------

/**
 *  Creates a new chat session locally.
 *	No network data is exchanged.
 *
 *  @param actor The entity with which to start the chat session. It can be an instance of 'VMSContact', 'VMSGroup', 'VMSContactSpecial'.
 *
 *  @return The newly created chat session.
 */
+ (instancetype)createWithActor:(VMSActor*)actor;


///-------------------
/// @name Send message
///-------------------

/**
 *  Creates and sends a text message.
 *
 *  @param text The text to send
 *
 *  @return The newly created message.
 */
- (VMSMessage*)sendTextMessageWithText:(NSString*)text inContext:(VMSMessageContext*)context;

/**
 *  Creates and sends an audio message.
 *
 *  @param filePath The path to the audio file.
 *  @param duration The duration of the audio in seconds.
 *
 *  @return The newly created message.
 */
- (VMSMessage*)sendAudioMessageWithFilePath:(NSString*)filePath duration:(NSTimeInterval)duration inContext:(VMSMessageContext*)context;

/**
 *  Creates and sends a message containing an image.
 *
 *  @param image The image to be sent.
 *
 *  @return The newly created message.
 */
- (VMSMessage*)sendImageMessageWithImage:(UIImage*)image inContext:(VMSMessageContext*)context;

/**
 *  Creates and sends a message containing a video.
 *
 *  @param videoURL The URL to the local video file.
 *
 *  @return The newly created message.
 */
- (VMSMessage*)sendVideoMessageWithVideoURL:(NSURL*)videoURL inContext:(VMSMessageContext*)context;

/**
 *  Creates and sends a location message.
 *
 *  @param latitude  The latitude coordinate.
 *  @param longitude The longitude coordinate.
 *  @param title     A title representing the place.
 *  @param preview   Data containing a preview.
 *
 *  @return The newly created message.
 */
- (VMSMessage*)sendLocationMessageWithLatitude:(double)latitude longitude:(double)longitude title:(NSString*)title preview:(NSData*)preview inContext:(VMSMessageContext*)context;

/**
 *  Creates and sends a message containing a contact.
 *
 *  @param vcard The contact in the "vcard" format.
 *
 *  @return The newly created message.
 */
- (VMSMessage*)sendContactWithVCard:(NSString*)vcard inContext:(VMSMessageContext*)context;

/**
 *  Creates and sends a message containing a extra.
 *
 *  @param extra   The extra
 *  @param context The context the message refers to.
 *
 *  @return The newly created message.
 */
- (VMSMessage*)sendExtra:(VMSMessageExtra*)extra inContext:(VMSMessageContext *)context;

/**
 *  Sends a previously created message.
 *
 *  @param message The message to be sent.
 *
 *  @return The updated message.
 */
- (VMSMessage*)sendMessage:(VMSMessage *)message;

/**
 *  Forwards an array of messages to the receiver's chat session.
 *
 *  @param messages The messages to be forwarded.
 */
- (void)forwardMessages:(NSArray*)messages;


///----------------------
/// @name Delete messages
///----------------------

- (void)deleteMessages:(NSArray*)messages;

///----------------------
/// @name Retire messages
///----------------------

/**
 *  Retires a message previously sent or already delivered to the recipient.
 *
 *  @param message The message to be retired.
 */
- (void)retireMessage:(VMSMessage*)message;


///-----------------
/// @name Chat state
///-----------------

/**
 *  Sends a chat state.
 *
 *  @param chatState The chat state to be sent.
 */
- (void)sendChatState:(VMSChatState)chatState;

/**
 *  The currently active chat state for the chat session.
 *
 *  @return The current chat state.
 */
- (VMSChatStateInfo*)currentChatState;


///--------------------
/// @name Mark messages
///--------------------

/**
 *  Marks the unread messages as displayed by the current user.
 *
 *  @return The messages that have been updated.
 */
- (NSArray*)markAllMessagesAcquired;


///-------------
/// @name Delete
///-------------

/**
 *  Deletes the object locally.
 */
- (BOOL)delete;

@end
