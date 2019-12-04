//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <HMFoundation/HMFObject-Protocol.h>

@class NSArray, NSString;

@interface NSSet (HMFMerging) <HMFObject>
+ (id)shortDescription;
- (id)hmf_commonObjectsFromSet:(id)arg1;
- (id)hmf_removedObjectsFromSet:(id)arg1;
- (id)hmf_addedObjectsFromSet:(id)arg1;
@property(readonly, getter=hmf_isEmpty) _Bool hmf_empty;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@end

