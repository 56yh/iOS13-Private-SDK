//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface ONOXPathFunctionResult : NSObject
{
    struct _xmlXPathObject *_xmlXPath;
}

@property(nonatomic) struct _xmlXPathObject *xmlXPath; // @synthesize xmlXPath=_xmlXPath;
@property(readonly, copy, nonatomic) NSString *stringValue;
@property(readonly, copy, nonatomic) NSNumber *numberValue;
@property(readonly, nonatomic) double numericValue;
@property(readonly, nonatomic) _Bool boolValue;
- (void)dealloc;

@end
