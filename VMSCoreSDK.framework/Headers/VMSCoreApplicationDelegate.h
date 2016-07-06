//
//  VMSCoreApplicationDelegate.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 23/06/16.
//  Copyright © 2016 vms.me. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VMSCoreApplicationDelegate : NSObject

+ (void)initializeFacebookWithApplicationLaunchOptions:(NSDictionary*)launchOptions;

+ (BOOL)facebookApplication:(UIApplication *)application
					openURL:(NSURL *)url
		  sourceApplication:(NSString *)sourceApplication
				 annotation:(id)annotation;

+ (void)facebookActivateApp;

@end
