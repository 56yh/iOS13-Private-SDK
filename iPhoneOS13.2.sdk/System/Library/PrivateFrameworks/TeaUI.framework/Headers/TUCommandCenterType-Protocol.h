//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol TUCommandType;

@protocol TUCommandCenterType
- (long long)stateForCommand:(id <TUCommandType>)arg1;
- (void)removeContextProvider:(id)arg1 forCommand:(id <TUCommandType>)arg2;
- (void)removeContextProvider:(id)arg1;
- (void)addContextProvider:(id)arg1 forCommand:(id <TUCommandType>)arg2 completion:(void (^)(NSObject *))arg3;
- (_Bool)canExecuteCommand:(id <TUCommandType>)arg1;
- (void)executeCommand:(id <TUCommandType>)arg1;
@end

