//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUAutoCalculator.h>

#import <PhotoImaging/NUTimeBased-Protocol.h>

@class NSString;

@interface PIWhiteBalanceAutoCalculator : NUAutoCalculator <NUTimeBased>
{
}

- (CDStruct_c3b9c2ee)_chooseTempTintForSushi:(CDStruct_92960315)arg1 RAWProperties:(id)arg2 brightness:(double)arg3;
- (CDStruct_145c54d4)_chooseNeutralGrayForNonSushi:(CDStruct_92960315)arg1;
- (CDStruct_145c54d4)_correctedRGBResultFromResult:(CDStruct_145c54d4)arg1;
- (_Bool)_useTempTint:(CDStruct_145c54d4)arg1;
- (void)submit:(id /* block */)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(nonatomic) CDStruct_1b6d18a9 time;

@end

