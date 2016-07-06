//
//  VMSMessage.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 19/10/15.
//  Copyright © 2015 vms.me. All rights reserved.
//

#import "VMSEntity.h"
#import "VMSTypes.h"
#import "VMSQuery.h"

@class VMSChatSession;
@class VMSMediaItem;
@class VMSEvent;
@class VMSMessageInfo;
@class VMSMessageContext;

/**
 *  The 'VMSMessage' class models a message record.
 */
@interface VMSMessage : VMSEntity


///--------------
/// @name Content
///--------------

/**
 *  A unique identifier for the message that is synchronized with the server.
 */
@property (nonatomic, readonly) NSString *messageID /*VMS_QUERYABLE*/;

/**
 *  The type of the message.
 */
@property (nonatomic, readonly) VMSMessageType messageType /*VMS_QUERYABLE*/;

/**
 *  The date the message has been created.
 */
@property (nonatomic, readonly) NSDate *date /*VMS_QUERYABLE*/;

/**
 *  Whether the message has been ever displayed. This is valid only for received messages.
 */
@property (nonatomic, readonly) BOOL acquired /*VMS_QUERYABLE*/;

/**
 *  Whether the message has been originated by the other party in the conversation.
 */
@property (nonatomic, readonly) BOOL received /*VMS_QUERYABLE*/;

/**
 *  Whether the message has been retired.
 */
@property (nonatomic, readonly) BOOL retired /*VMS_QUERYABLE*/;

/**
 *  The text contained in the message.
 */
@property (nonatomic, readonly) NSString *text /*VMS_QUERYABLE*/;

/**
 *  The name of the group member who sent the message. This is valid only in group chats and for received messages.
 */
@property (nonatomic, readonly) NSString *groupMemberDisplayedName /*VMS_QUERYABLE*/;

/**
 *  The conversation the message belongs to.
 */
@property (nonatomic, readonly) VMSChatSession *chatSession /*VMS_QUERYABLE*/;

/**
 *  The media connected to the message, if any.
 */
@property (nonatomic, readonly) VMSMediaItem *mediaItem /*VMS_QUERYABLE*/;

/**
 *  The event connected to the message, if any.
 */
@property (nonatomic, readonly) VMSEvent *event;

/**
 *  The current status of delivery of the message.
 */
@property (nonatomic, readonly) VMSDeliveryStatus deliveryStatus /*VMS_QUERYABLE*/;

/**
 *  <#Description#>
 */
@property (nonatomic, readonly) VMSMessageInfo *messageInfo;

/**
 *  <#Description#>
 */
@property (nonatomic, readonly) VMSMessageContext *context;

/**
 *  The transcription.
 */
@property (nonatomic, readonly) NSString *transcript /*VMS_QUERYABLE*/;


///------------
/// @name Media
///------------

/**
 *  Gets the media data of the message if present, keeping it in cache for future accesses.
 *
 *  @return The media as 'NSData'.
 */
- (NSData*)getMediaData;

/**
 *  Gets the preview of the message, keeping it in cache for future accesses.
 *
 *  @return The preview as a 'UIImage' object.
 */
- (UIImage*)getPreview;

/**
 *  Clears the cache for the preview.
 */
- (void)clearCachedThumb;

/**
 *  Check whether the media exists for the message.
 *
 *  @return Whether the media exists.
 */
- (BOOL)mediaExists;


///--------------------
/// @name Mark messages
///--------------------

/**
 *  Marks the message as read by the current user sending the information to the sender of the message.
 */
- (void)markAsRead;


///-----------------------
/// @name Full text search
///-----------------------

/**
 *  Performs a full text search on all messages.
 *
 *  @param string     The string to search.
 *  @param completion A block with an array of 'VMSMessage' as the only parameter.
 */
+ (void)fetchMessagesBySearchString:(NSString*)string completion:(void (^)(NSArray*))completion;

@end
