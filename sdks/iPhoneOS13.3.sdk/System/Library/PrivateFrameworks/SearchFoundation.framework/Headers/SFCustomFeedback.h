//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSData, NSDictionary;

@interface SFCustomFeedback : SFFeedback
{
    NSUInteger _feedbackType;
    NSDictionary *_jsonFeedback;
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSDictionary *jsonFeedback; // @synthesize jsonFeedback=_jsonFeedback;
@property(nonatomic) NSUInteger feedbackType; // @synthesize feedbackType=_feedbackType;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(NSUInteger)arg1 data:(id)arg2;
- (id)initWithType:(NSUInteger)arg1 jsonFeedback:(id)arg2;

@end

