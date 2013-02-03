/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableArray;

@interface IMOfflinePeopleListGroup : IMPeopleListGroup {
    NSInteger _changes;
    NSMutableArray *_dontShowMembers;
    BOOL _pendingClear;
    NSMutableArray *_visibleMembers;
}

@property(readonly) BOOL isChanging;

- (void)_clearVisibleMembers;
- (void)addPeopleListItem:(id)arg1;
- (void)beginChanges;
- (void)dealloc;
- (void)dontShowPresence:(id)arg1;
- (void)endChanges;
- (void)forgetIgnoredPresences;
- (id)init;
- (BOOL)isChanging;
- (NSInteger)numberOfItems;
- (void)removeAllItems;
- (void)removePeopleListItem:(id)arg1;
- (id)visibleMembers;

@end
