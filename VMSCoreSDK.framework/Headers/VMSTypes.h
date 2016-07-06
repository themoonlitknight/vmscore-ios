//
//  VMSTypes.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 19/10/15.
//  Copyright © 2015 vms.me. All rights reserved.
//

#ifndef VMSTypes_h
#define VMSTypes_h

/**
 *  Possible types for a chat session.
 */
typedef NS_ENUM(NSUInteger, VMSChatSessionType) {
	/**
	 *  The chat session is a conversation with a single 'VMSContact'.
	 */
	VMSChatSessionTypeChat,
	/**
	 *  The chat session is a conversation with a 'VMSGroup'.
	 */
	VMSChatSessionTypeGroupChat,
	/**
	 *  The chat session is a unidirectional conversation with a 'VMSAnnouncer'.
	 */
	VMSChatSessionTypeAnnounce,
	/**
	 *  The chat session is a conversation with a 'VMSContactSpecial'.
	 */
	VMSChatSessionTypeSpecial,
};

/**
 *  Defines the type of the current activity of an entity respect to a chat session.
 */
typedef NS_ENUM(NSUInteger, VMSChatState) {
	/**
	 *  The entity is active and possibly waiting for a message.
	 */
	VMSChatStateActive = 1,
	/**
	 *  The entity is writing a message.
	 */
	VMSChatStateComposingText,
	/**
	 *  The entity is recording an audio message.
	 */
	VMSChatStateComposingAudio,
};

/**
 *  Defines the type of the content of a message.
 */
typedef NS_ENUM(NSInteger, VMSMessageType) {
	/**
	 *  The message is a text.
	 */
	VMSMessageTypeText,
	/**
	 *  The message has an audio attachment.
	 */
	VMSMessageTypeAudio,
	/**
	 *  The message has an image attachment.
	 */
	VMSMessageTypeImage,
	/**
	 *  The message has a video attachment.
	 */
	VMSMessageTypeVideo,
	/**
	 *  The message is a location.
	 */
	VMSMessageTypeLocation,
	/**
	 *  The message is a contact.
	 */
	VMSMessageTypeVCard,
	/**
	 *  The message is a extra.
	 */
	VMSMessageTypeExtra,
	/**
	 *  The message is an event.
	 */
	VMSMessageTypeEvent,
};



static NSString * const VMSMessageInfoContactIDKey =	@"c";

static NSString * const VMSMessageInfoDateKey =		@"d";

typedef NS_ENUM(NSInteger, VMSDeliveryStatus) {
	// only for messages not sent yet
	VMSDeliveryStatusSending = -2,
	VMSDeliveryStatusDeliveryError = -1,
	
	// only for messages sent
	VMSDeliveryStatusDelivered = 0,					// delivered to server
	VMSDeliveryStatusReceived,						// received on at least one of recipient's devices
	VMSDeliveryStatusRead,							// read by recipient
};

typedef NS_ENUM(NSInteger, VMSContactSpecialType) {
	VMSContactSpecialTypePhone,
	VMSContactSpecialTypeEmail,
	VMSContactSpecialTypeHashTag,
};

typedef NS_ENUM(NSUInteger, VMSEventType) {
	VMSEventTypeGroupCreated,
	VMSEventTypeGroupSubjectUpdated,
	VMSEventTypeGroupMemberJoined,
	VMSEventTypeGroupMemberLeft,
};

#endif /* VMSTypes_h */
