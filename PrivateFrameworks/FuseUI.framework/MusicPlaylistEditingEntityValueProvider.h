/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicPlaylistEditingEntityValueProvider : NSObject <MusicEntityValueProviding> {
    UIImage * _artworkImage;
    NSMutableDictionary * _properties;
}

@property (nonatomic, retain) UIImage *artworkImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) MusicProductDescription *productDescription;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)artworkImage;
- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(float)arg3;
- (id)init;
- (id)productDescription;
- (void)setArtworkImage:(id)arg1;
- (void)setProductDescription:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end