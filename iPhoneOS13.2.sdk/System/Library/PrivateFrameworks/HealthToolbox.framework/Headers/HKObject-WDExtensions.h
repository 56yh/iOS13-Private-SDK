//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKObject.h>

#import <HealthToolbox/WDDataListDataObjectSource-Protocol.h>

@class NSString;

@interface HKObject (WDExtensions) <WDDataListDataObjectSource>
- (void)deleteObjectWithHealthStore:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end

