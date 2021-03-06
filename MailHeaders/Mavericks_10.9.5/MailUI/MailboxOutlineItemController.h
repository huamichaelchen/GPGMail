/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MailboxOutlineItemViewDelegate.h"
#import "MailboxTextFieldDelegate.h"

@class MailboxOutlineItemView, NSObject<MailboxOutlineItemControllerDelegate>;

@interface MailboxOutlineItemController : NSObject <MailboxTextFieldDelegate, MailboxOutlineItemViewDelegate>
{
    MailboxOutlineItemView *_view;
    id _item;
    NSObject<MailboxOutlineItemControllerDelegate> *_delegate;
}

@property NSObject<MailboxOutlineItemControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)mailboxOutlineItemViewShouldDisplayImage:(id)arg1;
- (void)mailboxTextFieldEndedEditingSession;
- (void)mailboxTextFieldBeganEditingSession;
- (long long)_alertState;
- (void)updateAlertState;
- (BOOL)_shouldShowBadge;
- (BOOL)_shouldShowProgressIndicator;
- (void)_updateProgressIndicator;
- (BOOL)_isEditing;
- (void)_updateBadgeAnimated:(BOOL)arg1;
- (void)_updateImage;
- (unsigned long long)_iconStyle;
- (unsigned long long)_iconSize;
- (void)_updateValuesForBasicSection;
- (void)_updateValuesForAccount;
- (void)_updateValuesForMailbox;
- (void)updateBadgeCountAnimated:(BOOL)arg1;
- (void)updateAllValues;
- (id)_sectionDisplayName;
- (id)_account;
- (id)_mailbox;
@property id item;
- (void)_connectView:(id)arg1;
- (void)_disconnectView:(id)arg1;
@property MailboxOutlineItemView *view;
- (id)debugDescription;
- (void)dealloc;

@end

