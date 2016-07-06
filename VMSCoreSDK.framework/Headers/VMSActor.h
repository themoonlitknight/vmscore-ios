//
//  VMSActor.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 09/11/15.
//  Copyright © 2015 vms.me. All rights reserved.
//

#import "VMSEntity.h"

@class VMSChatSession;

@interface VMSActor : VMSEntity

/**
 *  A unique identifier for the contact synchronized with the server.
 */
@property (nonatomic, readonly) NSString *identifier /*VMS_QUERYABLE*/;

/**
 *  The avatar of the actor.
 */
@property (nonatomic, readonly) NSString *avatar;

@property (nonatomic, readonly) NSString *avatarPreview;

@property (nonatomic, readonly) BOOL readonly;

/**
 *  The chat session opened with contact, if any.
 */
@property (nonatomic, readonly) VMSChatSession *chatSession /*VMS_QUERYABLE*/;

/**
 *  <#Description#>
 *
 *  @return <#return value description#>
 */
- (UIImage*)avatarPreviewImage;

- (void)downloadFullResolutionAvatarWithCompletion:(void(^)(BOOL succeeded))completion;

/**
 *  Check whether the entity is callable through a phone number.
 *
 *  @return Whether the entity is callable.
 */
- (BOOL)isCallable;

/**
 *  Returns an array of valid phone numbers that can be used to make a call.
 *
 *  @return An array of numbers.
 */
- (NSArray*)callableNumbers;

@end
