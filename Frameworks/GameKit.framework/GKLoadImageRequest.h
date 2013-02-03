/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSURL, UIImage;

@interface GKLoadImageRequest : GKDataRequest {
    UIImage *_image;
    NSURL *_url;
}

@property(retain) UIImage *image;
@property(retain) NSURL *url;

- (BOOL)authenticationRequired;
- (id)cacheKey;
- (NSInteger)cachePriority;
- (NSInteger)cacheType;
- (void)dealloc;
- (id)demarshalResponseData:(id)arg1;
- (id)errorForResponse:(id)arg1;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)header;
- (id)image;
- (id)request;
- (void)setImage:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
