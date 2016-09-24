/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMVideoPersistenceResponse : CAMPersistenceResponse <CAMTransientAssetConvertible> {
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _duration;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _stillDisplayTime;
    NSString * _stillPersistenceUUID;
}

@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (nonatomic, readonly) NSDate *captureDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { int x1; int x2; unsigned int x3; int x4; } duration;
@property (getter=isExpectingPairedVideo, nonatomic, readonly) BOOL expectingPairedVideo;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) struct { int x1; int x2; unsigned int x3; int x4; } irisStillDisplayTime;
@property (nonatomic, readonly) NSString *irisStillImageUUID;
@property (nonatomic, readonly) NSURL *irisVideoPersistenceURL;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, readonly) unsigned int numberOfRepresentedAssets;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly) struct { int x1; int x2; unsigned int x3; int x4; } stillDisplayTime;
@property (nonatomic, readonly, copy) NSDictionary *stillImageMetadata;
@property (nonatomic, readonly, copy) NSString *stillPersistenceUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (id)burstIdentifier;
- (id)captureDate;
- (struct { int x1; int x2; unsigned int x3; int x4; })duration;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 creationDate:(id)arg4 scubberImage:(id)arg5;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 creationDate:(id)arg4 scubberImage:(id)arg5 duration:(struct { int x1; int x2; unsigned int x3; int x4; })arg6 stillPersistenceUUID:(id)arg7 stillDisplayTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg8;
- (struct { int x1; int x2; unsigned int x3; int x4; })irisStillDisplayTime;
- (id)irisStillImageUUID;
- (id)irisVideoPersistenceURL;
- (BOOL)isExpectingPairedVideo;
- (unsigned int)mediaType;
- (unsigned int)numberOfRepresentedAssets;
- (id)placeholderImage;
- (struct { int x1; int x2; unsigned int x3; int x4; })stillDisplayTime;
- (id)stillImageMetadata;
- (id)stillPersistenceUUID;
- (id)uuid;

@end