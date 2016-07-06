//
//  VMSGroup.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 19/10/15.
//  Copyright © 2015 vms.me. All rights reserved.
//

#import "VMSActor.h"
#import "VMSQuery.h"

@class VMSContact;

/**
 *  The 'VMSGroup' class models a multi user conversation.
 */
@interface VMSGroup : VMSActor


///--------------
/// @name Content
///--------------

/**
 *  The date when the group has been originally created.
 */
@property (nonatomic, readonly) NSDate *creationDate /*VMS_QUERYABLE*/;

/**
 *  The subject of the group.
 */
@property (nonatomic, readonly) NSString *subject /*VMS_QUERYABLE*/;

/**
 *  The date when the subject has been updated for the last time.
 */
@property (nonatomic, readonly) NSDate *subjectDate /*VMS_QUERYABLE*/;

/**
 *  The participants of the group.
 */
@property (nonatomic, readonly) NSSet *members;


///---------------
/// @name Creation
///---------------

/**
 *  Creates a new group.
 *
 *  @param subject    The subject of the group.
 *  @param context    The context of the group.
 *  @param picture    The picture of the group.
 *  @param contacts   The contacts that will be invited after the group is created.
 *  @param completion A block that will be called when the operation will finish containing as the only parameter a NSError* object with the result of the operation.
 */
+ (void)createGroupWithSubject:(NSString*)subject
					   context:(NSString*)context
					   avatar:(UIImage *)avatar
					  contacts:(NSArray*)contacts
					completion:(void (^)(VMSGroup *group, NSError *error))completion;


///------------------
/// @name Leave group
///------------------

- (void)leaveGroupWithCompletion:(void (^)(NSError *error))completion;


///-------------------
/// @name Add contacts
///-------------------

/**
 *  Add contacts to group.
 *
 *  @param contacts   An array of 'VMSContact'.
 *  @param completion A block that will be called when the operation will finish containing as the only parameter a NSError* object with the result of the operation.
 */
- (void)addContacts:(NSArray<VMSContact*> *)contacts completion:(void (^)(NSError *error))completion;


///------------------
/// @name Update info
///------------------

/**
 *  Updates the subject.
 *
 *  @param subject    The new subject.
 *  @param completion A block that will be called when the operation will finish containing as the only parameter a NSError* object with the result of the operation.
 */
- (void)setSubject:(NSString*)subject completion:(void (^)(NSError *error))completion;

/**
 *  Updates the picture of the group.
 *
 *  @param pathToPicture The path to picture, relative to documents directory.
 *  @param completion    A block that will be called when the operation will finish containing as the only parameter a NSError* object with the result of the operation.
 */
- (void)setAvatar:(UIImage *)image completion:(void (^)(NSError *))completion;


///------------
/// @name Admin
///------------

- (BOOL)adminIsMe;

@end
