//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface _EARLanguageDetectorResult : NSObject
{
    _Bool _isConfident;
    NSDictionary *_confidences;
}

@property(nonatomic) _Bool isConfident; // @synthesize isConfident=_isConfident;
@property(copy, nonatomic) NSDictionary *confidences; // @synthesize confidences=_confidences;

@end

