/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MLChapterTOC;

@interface ML3TrackRep : MLTrack {
    MLChapterTOC *_chapterTOC;
}

- (unsigned long long)accountID;
- (id)album;
- (id)albumArtist;
- (unsigned long long)albumPID;
- (id)artist;
- (unsigned long long)artistPID;
- (unsigned long)audibleDRMGroupID;
- (unsigned long)bpm;
- (id)chapterTOC;
- (id)comments;
- (id)composer;
- (id)contentRatingInfo;
- (id)copyright;
- (NSInteger)customStopTimeInMS;
- (void)dealloc;
- (double)demoRentalDuration;
- (double)demoRentalPlaybackDuration;
- (double)demoRentalPlaybackStartTime;
- (double)demoRentalStartTime;
- (unsigned long)discNumber;
- (NSInteger)durationInMS;
- (NSUInteger)episodeNumber;
- (id)eqPresetName;
- (id)filePath;
- (unsigned long long)fileSize;
- (void)gaplessHeuristicInfo:(NSUInteger*)arg1 duration:(NSUInteger*)arg2 lastPacketsResync:(NSUInteger*)arg3 encodingDelay:(NSUInteger*)arg4 encodingDrain:(NSUInteger*)arg5;
- (id)genre;
- (unsigned long long)globalID;
- (id)grouping;
- (BOOL)hasChapterData;
- (BOOL)hasLastPlayedBookmarkTime;
- (BOOL)hasLyrics;
- (BOOL)hasNominalAmountBeenPlayed;
- (BOOL)hasVideoData;
- (NSUInteger)hash;
- (unsigned long)imageDBRecordID:(NSInteger)arg1;
- (void)incrementSkipCount;
- (id)infoDescription;
- (id)infoShortDescription;
- (id)initWithML3Entity:(id)arg1;
- (id)initWithTrackContext:(void*)arg1;
- (BOOL)isAudibleAudioBook;
- (BOOL)isCompilationTrack;
- (BOOL)isCurrentlyRestricted;
- (BOOL)isDemoRental;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTrack:(id)arg1;
- (BOOL)isExcludedFromShuffle;
- (BOOL)isHidden;
- (BOOL)isITunesU;
- (BOOL)isOTAPurchasedContent;
- (BOOL)isRental;
- (double)lastPlayedBookmarkTimeInSeconds;
- (double)lastPlayedDate;
- (id)lyrics;
- (BOOL)markAsDeleted;
- (void)markNominalAmountHasBeenPlayed;
- (unsigned long)mediaType;
- (id)movieInfo;
- (unsigned long)numberOfDiscs;
- (unsigned long)numberOfTracksInAlbum;
- (unsigned long long)persistentUID;
- (NSUInteger)playCount;
- (id)podcastDirectStoreURL;
- (id)podcastName;
- (id)podcastURL;
- (BOOL)rating;
- (unsigned long)ratingLevel;
- (double)releaseDate;
- (id)seasonDisplayName;
- (NSUInteger)seasonNumber;
- (id)seriesDisplayName;
- (void)setLyrics:(id)arg1;
- (void)setRating:(BOOL)arg1;
- (void)setVideoAudioTrackID:(NSUInteger)arg1;
- (void)setVideoSubtitleTrackID:(NSUInteger)arg1;
- (BOOL)shouldBookmarkLastPlayedTime;
- (NSUInteger)skipCount;
- (id)sortAlbum;
- (id)sortAlbumArtist;
- (id)sortArtist;
- (id)sortComposer;
- (id)sortSeriesDisplayName;
- (id)sortTitle;
- (NSInteger)startTimeInMS;
- (unsigned long long)storeItemAdamID;
- (unsigned long long)storePlaylistAdamID;
- (id)title;
- (NSInteger)totalTimeInMS;
- (unsigned long)trackIndexInAlbum;
- (unsigned long)uniqueID;
- (void)updateLastPlayedBookmarkTimeInSeconds:(double)arg1;
- (NSUInteger)videoAudioTrackID;
- (BOOL)videoHasAlternateAudio;
- (BOOL)videoHasSubtitles;
- (NSUInteger)videoSubtitleTrackID;
- (float)volumeAdjustment;
- (float)volumeNormalization;
- (unsigned long)year;

@end
