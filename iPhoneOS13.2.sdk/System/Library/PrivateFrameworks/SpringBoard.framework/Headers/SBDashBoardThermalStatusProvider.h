//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSThermalStatusProviding-Protocol.h>

@class NSString, SBThermalController;

@interface SBDashBoardThermalStatusProvider : NSObject <CSThermalStatusProviding>
{
    SBThermalController *_thermalController;
}

@property(readonly, nonatomic) long long thermalStatus;
- (id)initWithThermalController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

