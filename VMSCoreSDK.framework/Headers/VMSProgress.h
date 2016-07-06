//
//  VMSProgress.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 05/10/15.
//  Copyright © 2015 vms.me. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^ProgressTrackerCompletion)();
typedef void (^ProgressTrackerFailure)();
typedef void (^ProgressTrackerCancel)();
typedef void (^ProgressTrackerUpdate)(float fractionCompleted);

/**
 *  The 'VMSProgress' class is used to model the progress for a generic operation.
 */
@interface VMSProgress : NSObject

/**
 *  Returns the number of total units that must be completed to accomplish the task.
 */
@property (readonly) int64_t totalUnitCount;

/**
 *  Returns the number of completed units.
 */
@property (readonly) int64_t completedUnitCount;

/**
 *  Returns the percentage of completion.
 */
@property (readonly) float fractionCompleted;

/**
 *  A block with no parameters called upon completion.
 */
@property (copy) ProgressTrackerCompletion completionHandler;

/**
 *  A block with no parameters called upon failure.
 */
@property (copy) ProgressTrackerFailure failureHandler;

/**
 *  A block with no parameters called upon cancel.
 */
@property (copy) ProgressTrackerCancel cancelHandler;

/**
 *  A block with a float parameters called when an update is available.
 */
@property (copy) ProgressTrackerUpdate updateHandler;

/**
 *  A property used to save generic data associated with the VMSProgress.
 */
@property id userInfo;

@end
