//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AXTypingPrediction : NSObject
{
    NSString *_fullWord;
    NSString *_textToInsert;
    NSString *_prefix;
    double _probability;
    NSRange _rangeToReplace;
}

@property(nonatomic) double probability; // @synthesize probability=_probability;
@property(nonatomic) NSRange rangeToReplace; // @synthesize rangeToReplace=_rangeToReplace;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(copy, nonatomic) NSString *textToInsert; // @synthesize textToInsert=_textToInsert;
@property(copy, nonatomic) NSString *fullWord; // @synthesize fullWord=_fullWord;
// - (void).cxx_destruct;
- (id)description;

@end

