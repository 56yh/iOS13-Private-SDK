//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SKUIGiftAmount : NSObject <NSCopying>
{
    NSString *_displayLabel;
    NSString *_partNumber;
    NSNumber *_value;
}

@property(copy, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *partNumber; // @synthesize partNumber=_partNumber;
@property(copy, nonatomic) NSString *displayLabel; // @synthesize displayLabel=_displayLabel;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)HTTPBodyDictionary;
- (id)initWithAmountDictionary:(id)arg1;

@end

