//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDebugReportFormatter : NSObject
{
    unsigned long long _indentLevel;
    NSString *_indentString;
    unsigned long long _extraBodyIndentLevel;
}

+ (id)defaultFormatter;
@property(nonatomic) unsigned long long extraBodyIndentLevel; // @synthesize extraBodyIndentLevel=_extraBodyIndentLevel;
@property(copy, nonatomic) NSString *indentString; // @synthesize indentString=_indentString;
@property(nonatomic) unsigned long long indentLevel; // @synthesize indentLevel=_indentLevel;
- (id)stringFromReportComponents:(id)arg1;
- (id)init;

@end

