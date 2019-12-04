//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDVendorModelEntry, NSMutableSet;

@interface HMDVendorModelCollection : HMFObject
{
    HMDVendorModelEntry *_defaultEntry;
    NSMutableSet *_entries;
}

@property(readonly, nonatomic) NSMutableSet *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) HMDVendorModelEntry *defaultEntry; // @synthesize defaultEntry=_defaultEntry;
- (_Bool)isEqual:(id)arg1;
- (id)lookupProductData:(id)arg1;
- (id)lookupModel:(id)arg1;
- (void)addEntry:(id)arg1;
- (id)attributeDescriptions;
- (id)init;

@end

