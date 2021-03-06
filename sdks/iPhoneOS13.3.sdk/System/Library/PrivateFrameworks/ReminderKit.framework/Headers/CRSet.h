//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/CRCoding-Protocol.h>
#import <ReminderKit/CRDataType-Protocol.h>

@class CRDictionary, CRDocument, NSArray, NSHashTable, NSString;

@interface CRSet : NSObject <CRDataType, NSFastEnumeration, CRCoding>
{
    CRDictionary *_dictionary;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) CRDictionary *dictionary; // @synthesize dictionary=_dictionary;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)tombstone;
- (void)walkGraph:(id /* CDUnknownBlockType */)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
@property(nonatomic) __weak CRDocument *document;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)setObject:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)setUpdated:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (id)anyObject;
@property(readonly, copy) NSArray *allObjects;
@property(readonly) NSUInteger count;
- (BOOL)containsObject:(id)arg1;
- (id)member:(id)arg1;
- (id)initWithCRCoder:(id)arg1 set:(const struct Dictionary )arg2 elementValueDecoder:(id /* CDUnknownBlockType */)arg3;
- (id)initWithCRCoder:(id)arg1 set:(const struct Dictionary )arg2;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1 set:(struct Dictionary )arg2 elementValueCoder:(id /* CDUnknownBlockType */)arg3;
- (void)encodeWithCRCoder:(id)arg1 set:(struct Dictionary )arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (id)init;

@end

