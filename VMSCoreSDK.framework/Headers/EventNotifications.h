//
//  EventNotifications.h
//  CoreVMS
//
//  Created by Francesco Cosentino on 20/05/15.
//  Copyright (c) 2015 vms.me. All rights reserved.
//

#ifndef CoreVMS_EventNotifications_h
#define CoreVMS_EventNotifications_h

///-----------------
/// @name Connection
///-----------------

/**
 *  <#Description#>
 */
extern NSString *const VMSNotificationDidConnect;

/**
 *  <#Description#>
 */
extern NSString *const VMSNotificationDidNotConnect;

/**
 *  <#Description#>
 */
extern NSString *const VMSNotificationDidDisconnect;

/**
 *  <#Description#>
 */
extern NSString *const VMSNotificationConnectDidTimeout;


///---------------
/// @name Presence
///---------------

/**
 *  <#Description#>
 */
extern NSString *const VMSNotificationPresenceOnlineReceived;

/**
 *  <#Description#>
 */
extern NSString *const VMSNotificationPresenceOfflineReceived;


///--------------------
/// @name Last Activity
///--------------------

/**
 *  <#Description#>
 */
extern NSString *const VMSNotificationDidReceiveLastActivity;


///-------------
/// @name Avatar
///-------------

/**
 *  <#Description#>
 */
extern NSString *const VMSNotificationDidReceiveAvatar;


///---------------
/// @name Contacts
///---------------

/**
 *  <#Description#>
 */
// after downloading contact list
extern NSString *const VMSNotificationContactsReceived;


///---------------
/// @name Messages
///---------------

/**
 *  <#Description#>
 */
extern NSString *const VMSNotificationDidReceiveMessage;

/**
 *  <#Description#>
 */
extern NSString *const VMSNotificationDidStartSendingMessage;

/**
 *  <#Description#>
 */
extern NSString *const VMSNotificationMessageDeliveredToServer;
/**
 *  <#Description#>
 */
extern NSString *const VMSNotificationMessageReceivedByClient;
/**
 *  <#Description#>
 */
extern NSString *const VMSNotificationMessageReadByClient;

/**
 *  <#Description#>
 */
extern NSString *const VMSNotificationDidChangeChatState;

/**
 *  <#Description#>
 */
extern NSString *const VMSNotificationDidFinishSynchronization;

/**
 *  <#Description#>
 */
extern NSString *const VMSNotificationVMSClient;
extern NSString *const VMSNotificationUserInfoActorID;
extern NSString *const VMSNotificationMessagesUserInfoMessage;
extern NSString *const VMSNotificationMessagesUserInfoSuccess;
extern NSString *const VMSNotificationAvatarUserInfoId;
extern NSString *const VMSNotificationLastActivityUserInfoId;
extern NSString *const VMSNotificationLastActivityUserInfoSeconds;
extern NSString *const VMSNotificationLastActivityUserInfoStatus;


///-------------
/// @name Groups
///-------------

/**
 *  <#Description#>
 */
extern NSString *const VMSNotificationGroupUpdated;


///-------------
/// @name Notifications
///-------------

extern NSString *const VMSNotificationDidTapPushNotification;




//TODO: modify
// after server responded to a message retire or on timeout
#define kNotificationMessageRetired									@"vmsMessageRetired"
#define kNotificationMessageRetired_KeyMessageId					@"messageId"
#define kNotificationMessageRetired_KeySuccess						@"success"

// after committed deletion of a conversation
#define kNotificationConversationDidStartDeletion					@"vmsConversationDidStartDeletion"
#define kNotificationConversationDidStartDeletion_KeyChatSession	@"chatSession"

// after server responded to a deletion of a conversation
#define kNotificationConversationDidFinishDeletion					@"vmsConversationDidFinishDeletion"
#define kNotificationConversationDidFinishDeletion_KeyContact		@"contact"
#define kNotificationConversationDidFinishDeletion_KeySuccess		@"success"

#endif
