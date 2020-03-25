//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSString, NSURL;

@interface CRKChapter : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSArray *_subchapters;
    NSURL *_webURL;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSArray *subchapters; // @synthesize subchapters=_subchapters;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *JSONRepresentation;
- (id)description;
- (id)init;

@end
