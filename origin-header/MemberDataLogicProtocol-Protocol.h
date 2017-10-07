//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CContact, NSArray, NSMutableArray, NSString;

@protocol MemberDataLogicProtocol

@optional
- (void)addContact:(CContact *)arg1;
- (void)cancelSearch;
- (void)doSearch:(NSString *)arg1;
- (NSMutableArray *)filtContactsByName:(NSArray *)arg1;
- (NSArray *)getAllContacts;
- (NSMutableArray *)getFilteredContacts;
- (CContact *)getItemInSection:(unsigned long long)arg1 atRow:(unsigned long long)arg2;
- (NSArray *)getKeyArray;
- (NSString *)getKeyAtSection:(unsigned long long)arg1;
- (unsigned long long)getSectionCount;
- (unsigned long long)getSectionItemCount:(unsigned long long)arg1;
- (unsigned long long)getTotalCount;
- (void)reloadMemberList:(NSArray *)arg1;
- (_Bool)removeContact:(CContact *)arg1;
- (void)sortKeys;
@end
