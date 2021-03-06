//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber, NSString, NSURL;

@interface SKUISearchRequest : NSObject <NSCopying>
{
    NSNumber *_searchHintIndex;
    NSString *_searchHintOriginalTerm;
    NSString *_term;
    NSURL *_url;
}

@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(copy, nonatomic) NSString *term; // @synthesize term=_term;
@property(copy, nonatomic) NSString *searchHintOriginalTerm; // @synthesize searchHintOriginalTerm=_searchHintOriginalTerm;
@property(copy, nonatomic) NSNumber *searchHintIndex; // @synthesize searchHintIndex=_searchHintIndex;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

