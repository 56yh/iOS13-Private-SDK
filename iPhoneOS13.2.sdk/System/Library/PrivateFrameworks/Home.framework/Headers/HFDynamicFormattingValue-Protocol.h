//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@protocol HFStringGenerator, NACancelable;

@protocol HFDynamicFormattingValue 
@property(readonly, nonatomic) id <HFStringGenerator> currentFormattedValue;
@property(readonly, nonatomic) id value;
- (id <NACancelable>)observeFormattedValueChangesWithBlock:(void (^)(id <HFDynamicFormattingValue>))arg1;
@end

