//
//  VMSContact.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 19/10/15.
//  Copyright © 2015 vms.me. All rights reserved.
//

#import "VMSActor.h"
#import "VMSQuery.h"

/**
 *  The 'VMSContact' class models an entity the current user can communicated to.
 */
@interface VMSContact : VMSActor


///--------------
/// @name Content
///--------------

/**
 *  The first name of the contact.
 */
@property (nonatomic, readonly) NSString *firstName /*VMS_QUERYABLE*/;

/**
 *  The full name of the contact.
 */
@property (nonatomic, readonly) NSString *fullName /*VMS_QUERYABLE*/;

/**
 *  The current status for the contact.
 */
@property (nonatomic, readonly) NSString *statusText;

/**
 *  The date when the status has been updated.
 */
@property (nonatomic, readonly) NSDate *statusDate;


///-------------
/// @name Online
///-------------

/**
 *  Check whether the contact is online.
 *
 *  @return Whether the contact is online.
 */
- (BOOL)isOnline;


///--------------------
/// @name Last Activity
///--------------------

/**
 *  The date of the last access by the contact.
 *
 *  @return <#return value description#>
 */
- (NSDate*)lastActivity;
- (void)requestLastActivityWithCompletion:(void (^)(NSDate *time, NSString *status))completion;


///---------------------
/// @name Block contacts
///---------------------

- (void)blockWithCompletion:(void (^)(BOOL success))completion;
- (void)unblockWithCompletion:(void (^)(BOOL success))completion;
+ (NSArray<VMSContact*> *)blockedContacts;

@end
