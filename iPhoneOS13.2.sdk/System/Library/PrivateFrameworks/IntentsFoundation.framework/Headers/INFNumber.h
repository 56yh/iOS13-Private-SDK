//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IntentsFoundation/INFSentenceToken.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface INFNumber : INFSentenceToken
{
    NSString *_identifier;
    NSNumber *_value;
}

+ (id)numberWithIdentifier:(id)arg1;
@property(copy, nonatomic) NSNumber *value; // @synthesize value=_value;
- (id)identifier;
- (id)dictionaryRepresentation;
- (id)stringForContext:(id)arg1;
- (id)contributingSentenceContext;
- (id)initWithIdentifier:(id)arg1;

@end

