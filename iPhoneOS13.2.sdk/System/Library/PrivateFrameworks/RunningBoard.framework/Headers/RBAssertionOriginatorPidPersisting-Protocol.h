//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSSet;

@protocol RBAssertionOriginatorPidPersisting 
- (_Bool)isValid;
- (_Bool)containsPid:(int)arg1;
- (void)removePid:(int)arg1;
- (void)addPid:(int)arg1;
- (void)setValidProcesses:(NSSet *)arg1;
@end

