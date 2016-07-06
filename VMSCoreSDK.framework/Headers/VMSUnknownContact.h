//
//  VMSUnknownContact.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 11/01/16.
//  Copyright © 2016 vms.me. All rights reserved.
//

#import "VMSEntity.h"

@interface VMSUnknownContact : VMSEntity

///--------------
/// @name Content
///--------------

@property (nonatomic, readonly) NSString *identifier;

@property (nonatomic, readonly) NSString *avatar;

@property (nonatomic, readonly) NSString *status;

- (UIImage*)avatarImage;

@end
