//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/ENTException.h>

@interface ENTApplicationException : ENTException
{
    int _type;
}

+ (id)exceptionWithType:(int)arg1 reason:(id)arg2;
+ (id)read:(id)arg1;
- (void)write:(id)arg1;
- (id)initWithType:(int)arg1 reason:(id)arg2;

@end

