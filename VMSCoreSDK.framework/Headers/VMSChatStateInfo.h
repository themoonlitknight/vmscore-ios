//
//  VMSChatStateInfo.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 07/06/16.
//  Copyright © 2016 vms.me. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VMSTypes.h"

@interface VMSChatStateEntry : NSObject

@property (nonatomic, readonly) VMSChatState chatState;
@property (nonatomic, readonly) NSString *senderID;

@end

@interface VMSChatStateInfo : NSObject

@property (nonatomic, readonly) NSString *actorID;
@property (nonatomic, readonly) NSArray<VMSChatStateEntry*> *entries;

@end
