//
//  VMSGroupMember.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 26/10/15.
//  Copyright © 2015 vms.me. All rights reserved.
//

#import "VMSEntity.h"
#import "VMSQuery.h"

@class VMSContact;
@class VMSUnknownContact;
@class VMSGroup;

/**
 *  The 'VMSGroupMember' class models a participant in a multi user chat.
 */
@interface VMSGroupMember : VMSEntity


///--------------
/// @name Content
///--------------

/**
 *  The name displayed for this participant.
 */
@property (nonatomic, readonly) NSString *displayedName /*VMS_QUERYABLE*/;

/**
 *  Whether the receiver is the administrator of the group.
 */
@property (nonatomic, readonly) BOOL isAdmin /*VMS_QUERYABLE*/;

/**
 *  Whether the receiver corresponds to the active user.
 */
@property (nonatomic, readonly) BOOL isMe /*VMS_QUERYABLE*/;

/**
 *  The contact the receiver is related to.
 */
@property (nonatomic, readonly) VMSContact *contact /*VMS_QUERYABLE*/;

/**
 *  The unknown contact the receiver is related to.
 */
@property (nonatomic, readonly) VMSUnknownContact *unknownContact;

/**
 *  The group the receiver belongs to.
 */
@property (nonatomic, readonly) VMSGroup *group /*VMS_QUERYABLE*/;

@end
