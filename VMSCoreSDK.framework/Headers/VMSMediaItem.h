//
//  VMSMediaItem.h
//  VMSCoreSDK
//
//  Created by Francesco Cosentino on 19/10/15.
//  Copyright © 2015 vms.me. All rights reserved.
//

#import "VMSEntity.h"
#import "VMSQuery.h"

@class VMSMessage;
@class VMSProgress;

/**
 *  The 'VMSMediaItem' class contains information and data for a medium contained in message.
 */
@interface VMSMediaItem : VMSEntity


///--------------
/// @name Content
///--------------

/**
 *  The duration of the audio message.
 */
@property (nonatomic, readonly) float duration /*VMS_QUERYABLE*/;

/**
 *  The size of the medium.
 */
@property (nonatomic, readonly) int filesize /*VMS_QUERYABLE*/;

/**
 *  The latitude coordinate for a location.
 */
@property (nonatomic, readonly) double latitude /*VMS_QUERYABLE*/;

/**
 *  The longitude coordinate for a location.
 */
@property (nonatomic, readonly) double longitude /*VMS_QUERYABLE*/;

/**
 *  The path to media relative to documents directory.
 */
@property (nonatomic, readonly) NSString *mediaLocalPath;

/**
 *  The path to the preview relative to documents directory.
 */
@property (nonatomic, readonly) NSString *previewLocalPath;

/**
 *  The title of the medium.
 */
@property (nonatomic, readonly) NSString *title /*VMS_QUERYABLE*/;

/**
 *  The message the media item belongs to.
 */
@property (nonatomic, readonly) VMSMessage *message /*VMS_QUERYABLE*/;

/**
 *  A progress object that can be used to track download or upload operations on the medium.
 */
@property (nonatomic, readonly) VMSProgress *progress;


///------------------------
/// @name Network transfers
///------------------------

/**
 *  Starts the download of the media.
 *
 *  @return A 'VMSProgress' object to track progress of download.
 */
- (VMSProgress*)downloadMedia;

/**
 *  Cancel the current download of the media.
 */
- (void)cancelDownload;

/**
 *  Check whether media is currently downloading.
 *
 *  @return Whether the media is currently downloading.
 */
- (BOOL)isDownloadingMedia;

/**
 *  Cancel the current upload of the media.
 */
- (void)cancelUpload;


///------------
/// @name Paths
///------------

/**
 *  Returns the absolute path for media so that it can be accessed directly on the filesystem
 *
 *  @return The absolute path for media.
 */
- (NSString*)fullPathForMedia;

/**
 *  Returns the absolute path for preview.
 *
 *  @return The absolute path for preview.
 */
- (NSString*)fullPathForPreview;

@end
