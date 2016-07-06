//
//  VMSClient.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 10/09/15.
//  Copyright (c) 2015 vms.me. All rights reserved.
//

#import <Foundation/Foundation.h>

@class VMSMessage;

/**
 *  An instance of 'VMSClient' provides basic functionalities such as connection to host.
 */
@interface VMSClient : NSObject

/**
 *  Creates a new VMS client instance.
 *
 *  @param clientID An ID string obtained on the portal.
 *
 *  @return The newly created client.
 */
+ (instancetype)clientWithID:(NSString*)clientID;

/**
 *  Returns the current documents directory used by VMS to manage files.
 *
 *  @return The path to documents directory.
 */
+ (NSString*)documentsDirectory;
/**
 *  Sets the documents directory to be used by VMS to manage files.
 *  If not set the default directory will be used.
 *
 *  @param val The path to documents directory.
 */
+ (void)setDocumentsDirectory:(NSString*)val;

+ (NSString*)mediaFolder;
+ (void)setMediaFolder:(NSString*)val;

@property (nonatomic, readonly) NSString *currentUser;

@property (nonatomic, readonly) NSString *currentUserName;

@property (nonatomic) NSData *avatar;
@property (nonatomic, readonly) NSData *avatarPreview;

@property (nonatomic) NSString *suffixForAnnouncer;

- (void)signUpWithPhoneNumberWithCompletion:(void (^)(NSString *userID, NSError *error))completion;
- (void)signUpWithFacebookWithCompletion:(void (^)(NSString *userID, NSError *error))completion;

- (void)syncAddressBookWithCompletion:(void (^)(NSError *error))completion;

//TEMP
- (BOOL)registerWithUser:(NSString*)user password:(NSString*)password;
//TEMP
- (void)addContact:(NSString*)username;

/**
 *  Connect and authenticate with chat service.
 */
- (void)connect;

/**
 *  Disconnect.
 */
- (void)disconnect;

- (void)logoutWithCompletion:(void (^)(BOOL success))completion;

/**
 *  Check whether the connection to the service is established and the user is authenticated.
 *
 *  @return Whether it's connected and authenticated.
 */
- (BOOL)isAuthenticated;

/**
 *  Check whether credentials are stored for subsequent accesses.
 *
 *  @return Whether credentials are stored for subsequent accesses.
 */
- (BOOL)hasCredentials;

/**
 *  Register a device token for push notifications.
 *
 *  @param deviceToken The device token.
 */
- (void)updatePushDeviceToken:(NSString *)deviceToken;

- (BOOL)synchronizeWithPushNotification:(NSDictionary*)userInfo completion:(void(^)(VMSMessage *message, NSError *error))completion;

@end
