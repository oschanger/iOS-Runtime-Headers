/* Generated by RuntimeBrowser.
 */

@protocol HFNamedWallpaperSource <NSObject>

@required

- (NSArray *)allWallpapersForCollection:(int)arg1;
- (HFWallpaper *)defaultWallpaperForCollection:(int)arg1;
- (UIImage *)imageForWallpaper:(HFWallpaper *)arg1;

@end