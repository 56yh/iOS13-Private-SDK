//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIPasscodeLockViewWithKeypad.h>

@interface SBUIPasscodeLockViewSimpleFixedDigitKeypad : SBUIPasscodeLockViewWithKeypad
{
    unsigned long long _numberOfDigits;
}

@property(readonly, nonatomic) unsigned long long numberOfDigits; // @synthesize numberOfDigits=_numberOfDigits;
- (double)_entryFieldBottomYDistanceFromNumberPadTopButton;
- (id)_newEntryField;
- (id)initWithLightStyle:(_Bool)arg1 numberOfDigits:(unsigned long long)arg2;
- (id)initWithLightStyle:(_Bool)arg1;

@end

