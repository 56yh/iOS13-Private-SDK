//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class NSArray, NSString, TIKeyboardLayout;

@interface TITypologyRecordReplacements : TITypologyRecord
{
    NSString *_string;
    TIKeyboardLayout *_keyLayout;
    NSArray *_candidates;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
@property(retain, nonatomic) TIKeyboardLayout *keyLayout; // @synthesize keyLayout=_keyLayout;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
// - (void).cxx_destruct;
- (id)shortDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end
