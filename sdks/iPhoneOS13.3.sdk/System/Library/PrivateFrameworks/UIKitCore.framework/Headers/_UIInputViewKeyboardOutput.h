//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIKeyboardOutput.h>


__attribute__((visibility("hidden")))
@interface _UIInputViewKeyboardOutput : TIKeyboardOutput <NSCopying, NSSecureCoding>
{
    BOOL _didBeginOutput;
    long long _positionOffset;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL didBeginOutput; // @synthesize didBeginOutput=_didBeginOutput;
@property(nonatomic) long long positionOffset; // @synthesize positionOffset=_positionOffset;
- (void)setHandwritingStrokesToDelete:(id)arg1;
- (void)setShortcutConversion:(id)arg1;
- (void)setInsertionTextAfterSelection:(id)arg1;
- (void)setForwardDeletionCount:(NSUInteger)arg1;
- (void)setTextToCommit:(id)arg1;
- (void)setAcceptedCandidate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

