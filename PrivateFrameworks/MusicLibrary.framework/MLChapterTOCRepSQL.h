/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MLTrack;

@interface MLChapterTOCRepSQL : MLITChapterTOCRep {
    MLTrack *_track;
}

- (id)availableArtworkFormatIDsForArtworkGroupChapterIndex:(NSUInteger)arg1;
- (void)dealloc;
- (id)imageDataForArtworkFormatID:(NSUInteger)arg1 size:(struct CGSize { float x1; float x2; })arg2 artworkChapterIndex:(NSUInteger)arg3 artworkInstanceInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { NSUInteger x_1_1_1; NSUInteger x_1_1_2; NSUInteger x_1_1_3; NSUInteger x_1_1_4; NSInteger x_1_1_5; NSInteger x_1_1_6; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg4;
- (id)initWithChapterDataRef:(struct ChapterData { }*)arg1 track:(id)arg2;

@end
