//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (PKMerge)
- (id)_createOrConvertToMutableDictionaryFromDictionary:(id)arg1;
- (id)_mutableDictionaryAtKeyPath:(NSArray )arg1;
- (void)_overlayCustomValueAtKeyPath:(NSArray )arg1 intoTargetDictionary:(id)arg2 fromSourceDictionary:(id)arg3 handler:(id /* CDUnknownBlockType */)arg4;
- (void)_overlayValueAtKey:(id)arg1 intoTargetDictionary:(id)arg2 fromSourceDictionary:(id)arg3 targetTakePrecedent:(BOOL)arg4 nestedDictionaryHandler:(id /* CDUnknownBlockType */)arg5;
- (void)pk_removeItemsAtKeyPaths:(NSSet )arg1;
- (void)pk_overlayDictionary:(id)arg1 existingValuesTakePrecedent:(BOOL)arg2 exceptKeyPaths:(NSSet )arg3 exemptionHandler:(id /* CDUnknownBlockType */)arg4;
@end

