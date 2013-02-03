/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class AccountsManager, NSArray, ABModel, NSDictionary, NSMutableDictionary;

@interface ABAccountsAndGroupDataSource : NSObject <UITableViewDataSource, UITableViewDelegate> {
    NSArray *_accountDisplayNames;
    NSArray *_accountIdentifiers;
    AccountsManager *_accountsManager;
    NSDictionary *_groupsByAccountIdentifier;
    NSMutableDictionary *_headerViewsBySection;
    BOOL _hidesSearchableStores;
    ABModel *_model;
}

@property(retain) AccountsManager *accountsManager;
@property(retain) ABModel *model;
@property BOOL hidesSearchableStores;

- (id)accountDisplayNameAtIndex:(NSInteger)arg1;
- (id)accountGroupWrappers;
- (id)accountsManager;
- (void)cacheHeaderView:(id)arg1 forSection:(NSUInteger)arg2;
- (id)cachedHeaderViewForSection:(NSUInteger)arg1;
- (void)cancelScheduledRefresh;
- (void)dealloc;
- (id)defaultGroupWrapper;
- (id)groupNameForIndexPath:(id)arg1;
- (id)groupWrapperForIndexPath:(id)arg1;
- (BOOL)hasMultipleAccountsOrGroups;
- (BOOL)hidesSearchableStores;
- (id)indexPathForGroupWrapper:(id)arg1;
- (id)init;
- (id)model;
- (NSInteger)numberOfAccounts;
- (NSInteger)numberOfGroupsForAccountIdentifier:(id)arg1;
- (NSInteger)numberOfGroupsInAccountAtIndex:(NSInteger)arg1;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (NSInteger)preferredTableViewStyle;
- (void)reloadData;
- (void)reloadDataIncludingAccountsManager:(BOOL)arg1;
- (void)scheduleRefresh;
- (void)setAccountsManager:(id)arg1;
- (void)setHidesSearchableStores:(BOOL)arg1;
- (void)setModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(NSInteger)arg2;

@end
