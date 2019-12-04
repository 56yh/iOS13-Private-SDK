//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMBusinessNameManager, NSHashTable, NSMutableDictionary;

@interface IMHandleRegistrar : NSObject
{
    NSMutableDictionary *_siblingsMap;
    NSHashTable *_allIMHandles;
    NSMutableDictionary *_CNIDToHandlesMap;
    IMBusinessNameManager *_businessNameManager;
}

+ (id)sharedInstance;
- (id)businessNameForUID:(id)arg1 updateHandler:(id /* block */)arg2;
- (id)_existingChatSiblingsForHandle:(id)arg1;
- (id)_chatSiblingsForHandle:(id)arg1;
- (id)_existingAccountSiblingsForHandle:(id)arg1;
- (id)_accountSiblingsForHandle:(id)arg1;
- (void)_dumpOutAllIMHandlesForAccount:(id)arg1;
- (void)_dumpOutAllIMHandles;
- (id)getIDsForAllIMHandles;
- (id)getIDsForFinalBatch;
- (id)getIDsForInitialBatch;
- (id)getIMHandlesForID:(id)arg1;
- (id)allIMHandles;
- (id)siblingsForIMHandle:(id)arg1;
- (void)clearSiblingCacheForIMHandle:(id)arg1;
- (void)unregisterIMHandle:(id)arg1;
- (void)registerIMHandle:(id)arg1;
- (id)CNIDToHandlesMap;
- (void)clearCNIDToHandlesMap;
- (void)removeHandleFromCNIDMap:(id)arg1 withCNID:(id)arg2;
- (id)handlesForCNIdentifier:(id)arg1;
- (void)addHandleToCNIDMap:(id)arg1 CNContact:(id)arg2;
- (void)_clearSiblingsCacheForIMHandle:(id)arg1 rebuildAfter:(_Bool)arg2;
- (void)_buildSiblingsForIMHandle:(id)arg1;
- (void)_emptySiblingCacheForIMHandleGUID:(id)arg1;
- (id)init;
- (void)_addressBookChanged;
- (void)processContactChangeHistoryEventWithHandleIDs:(id)arg1 andCNContact:(id)arg2;
- (void)_handleUpdateContactChangeHistoryEvent:(id)arg1;
- (void)_handleAddContactChangeHistoryEvent:(id)arg1;
- (void)_handleDeleteContactChangeHistoryEvent:(id)arg1;
- (void)_handleDropEverythingChangeHistoryEvent;

@end

