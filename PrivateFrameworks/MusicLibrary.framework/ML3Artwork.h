/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString, NSURL;

@interface ML3Artwork : NSObject {
    NSString *_artworkToken;
    long long _artworkType;
    NSURL *_originalFileURL;
    NSString *_relativePath;
    long long _sourceType;
}

@property(readonly) NSString * artworkToken;
@property(readonly) long long artworkType;
@property(readonly) NSURL * originalFileURL;
@property(readonly) NSString * relativePath;
@property(readonly) long long sourceType;

- (void).cxx_destruct;
- (id)artworkToken;
- (long long)artworkType;
- (id)fileURLForSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)hash;
- (id)initWithToken:(id)arg1 sourceType:(long long)arg2 artworkType:(long long)arg3;
- (id)initWithToken:(id)arg1 sourceType:(long long)arg2 relativePath:(id)arg3 artworkType:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)originalFileURL;
- (id)relativePath;
- (long long)sourceType;

@end