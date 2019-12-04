//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataAccess/DAContainerProvider.h>

@class CNContactStore;

@interface _DAContactsContainerProvider : DAContainerProvider
{
    CNContactStore *_contactStore;
}

@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (_Bool)setLastSyncDateForContainer:(id)arg1;
- (void)setDefaultContainer:(id)arg1 withLocalDBHelper:(id)arg2 onlyIfNotSet:(_Bool)arg3;
- (id)createNewContainerWithType:(int)arg1 name:(id)arg2 externalIdentifier:(id)arg3 constraintsPath:(id)arg4 syncData:(id)arg5 contentReadonly:(_Bool)arg6 propertiesReadonly:(_Bool)arg7 forAccount:(id)arg8;
- (id)allContainersForAccountWithExternalIdentifier:(id)arg1;
- (id)allContainers;
- (id)containerWithExternalIdentifier:(id)arg1 forAccountWithExternalIdentifier:(id)arg2;
- (id)initWithContactStore:(id)arg1;

@end

