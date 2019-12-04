//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class NSSet, NSString;
@protocol MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsFakePullSource : MapsSuggestionsBaseSource <MapsSuggestionsSource>
{
    struct ReadWriteQueue _readwrite;
    struct NSArray *_entriesToPull;
    NSSet *_fakeCanProduceEntriesOfType;
    unsigned long long _calledStart;
    unsigned long long _calledUpdateSuggestionEntries;
    unsigned long long _calledStop;
    unsigned long long _calledUserRemove;
    unsigned long long _calledFeedbackForEntry;
    unsigned long long _calledfeedbackForMapItem;
    unsigned long long _calledfeedbackForContact;
    id /* block */ _handlerForFeedback;
    long long _calledUserRemoveBehavior;
    unsigned long long _totalAdded;
    double _configFrequency;
    _Bool _configSendCopies;
}

+ (unsigned long long)disposition;
+ (_Bool)isEnabled;
@property _Bool configSendCopies; // @synthesize configSendCopies=_configSendCopies;
@property double configFrequency; // @synthesize configFrequency=_configFrequency;
- (id).cxx_construct;
- (void)startDebugTest;
- (void)setPullResponseEntries:(struct NSArray *)arg1;
- (void)pushEntries:(struct NSArray *)arg1;
- (unsigned long long)_addEntries:(struct NSArray *)arg1;
- (struct NSArray *)_copyEntriesIfNecessary:(struct NSArray *)arg1;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (void)configCanProduceEntriesOfType:(id)arg1;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntries;
- (void)stop;
- (void)start;
- (void)configureHandlerForFeedbackBlock:(id /* block */)arg1;
@property(readonly) unsigned long long totalAdded;
@property(readonly) long long calledUserRemoveBehavior;
@property(readonly) unsigned long long calledfeedbackForContact;
@property(readonly) unsigned long long calledfeedbackForMapItem;
@property(readonly) unsigned long long calledFeedbackForEntry;
@property(readonly) unsigned long long calledUserRemove;
@property(readonly) unsigned long long calledUpdateSuggestionEntries;
@property(readonly) unsigned long long calledStop;
@property(readonly) unsigned long long calledStart;
- (id)initWithDelegate:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

