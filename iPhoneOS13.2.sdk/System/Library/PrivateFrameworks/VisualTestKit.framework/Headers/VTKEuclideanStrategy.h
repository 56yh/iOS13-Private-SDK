//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualTestKit/VTKColorDifferenceStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VTKEuclideanStrategy : NSObject <VTKColorDifferenceStrategy>
{
}

- (double)differenceBetweenColor:(id)arg1 andColor:(id)arg2;
@property(readonly, nonatomic) double tolerance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

