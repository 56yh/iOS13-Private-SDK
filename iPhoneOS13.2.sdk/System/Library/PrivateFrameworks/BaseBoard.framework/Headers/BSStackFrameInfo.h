//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BSStackFrameInfo : NSObject
{
    unsigned long long _address;
    NSString *_functionName;
    NSString *_className;
    NSString *_executablePath;
    NSString *_realFunctionName;
}

@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property(readonly, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(readonly, nonatomic) unsigned long long address; // @synthesize address=_address;
@property(readonly, nonatomic) NSString *executableName;
- (id)description;
- (id)initWithReturnAddress:(unsigned long long)arg1;

@end

