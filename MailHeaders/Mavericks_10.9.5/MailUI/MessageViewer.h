/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSResponder.h"

#import "FlaggedStatusToolbarItemDelegate.h"
#import "MCActivityTarget.h"
#import "MVMailboxSelectionOwner.h"
#import "MVTerminationHandler.h"
#import "MailTableViewDelegateDelegate.h"
#import "MailboxesOutlineViewControllerDelegate.h"
#import "MessageTransferDelegate.h"
#import "MessageViewerSearchFieldFocusDelegate.h"
#import "NSAnimationDelegate.h"
#import "NSSpeechSynthesizerDelegate.h"
#import "NSToolbarDelegate.h"
#import "NSUserInterfaceValidations.h"
#import "NSWindowDelegate.h"
#import "SGTSearchFieldQueryScopeDelegate.h"
#import "SearchScopeDelegate.h"

@class ActivityViewController, ContentSplitViewController, FavoritesBarView, FlaggedStatusToolbarItem, FullScreenWindowController, MCInvocationQueue, MCSafeBoolCache, MailBarContainerView, MailSplitView, MailToolbar, MailboxPaneBottomView, MailboxesOutlineViewController, MailboxesSplitViewController, MessageListContainerView, MessageViewerLazyPopUpButton, MessageViewerSearchField, NSAnimation, NSArray, NSDictionary, NSLayoutConstraint, NSMenu, NSMenuItem, NSMutableArray, NSNumber, NSSet, NSString, NSTextField, NSTimer, NSToolbarItem, NSView, NSWindow, RichMessageListSortView, TableViewManager, ViewingPaneViewController;

@interface MessageViewer : NSResponder <FlaggedStatusToolbarItemDelegate, MessageViewerSearchFieldFocusDelegate, NSToolbarDelegate, MailboxesOutlineViewControllerDelegate, MailTableViewDelegateDelegate, MCActivityTarget, MessageTransferDelegate, MVMailboxSelectionOwner, MVTerminationHandler, NSAnimationDelegate, NSSpeechSynthesizerDelegate, NSUserInterfaceValidations, NSWindowDelegate, SearchScopeDelegate, SGTSearchFieldQueryScopeDelegate>
{
    id <MessageMall> _messageMall;
    MessageViewerSearchField *_searchField;
    NSToolbarItem *_searchViewItem;
    MailToolbar *_toolbar;
    NSDictionary *_toolbarItems;
    NSWindow *_window;
    FlaggedStatusToolbarItem *_flaggedStatusToolbarItem;
    NSToolbarItem *_fullScreenFlagMenuToolbarItem;
    NSDictionary *_savedAttributes;
    struct __MDQuery *_lowPriorityQuery;
    struct __MDQuery *_highPriorityQuery;
    MCInvocationQueue *_userTasks;
    NSString *_searchQuery;
    NSString *_searchPhrase;
    long long _currentSearchField;
    int _currentSearchTarget;
    long long _selectedTag;
    NSMenu *_messageColumnsMenu;
    NSMenu *_messageSortByMenu;
    NSMenuItem *_columnsMenuItem;
    NSMenuItem *_sortByMenuItem;
    NSMenuItem *_dateReceivedMenuItem;
    NSMenuItem *_dateSentMenuItem;
    NSMenuItem *_dateReceivedTableHeaderMenuItem;
    NSMenuItem *_dateSentTableHeaderMenuItem;
    MailboxPaneBottomView *_mailboxPaneBottomView;
    struct CGSize _messageListUserSize;
    double _mailboxesPaneUserWidth;
    BOOL _shouldPreventTableViewResize;
    BOOL _shouldMakeTableViewSelectionVisible;
    BOOL _showingDefaultSearchString;
    BOOL _updatingSearchField;
    BOOL _allowShowingDeletedMessages;
    BOOL _suppressWindowTitleUpdates;
    BOOL _didSetupUI;
    double _restoreMailboxPaneToWidthAfterDragOperation;
    NSArray *_mailboxesToDisplayWhenVisible;
    NSString *_stringToSearchWhenVisible;
    BOOL _shouldCascadeWhenShowing;
    NSDictionary *_initialWindowState;
    NSArray *_messagesToDeleteAfterPlainTextTransferHasCompleted;
    NSSet *_initiallySelectedMessages;
    NSMutableArray *_transferOperations;
    NSDictionary *_plainTextTransferParameters;
    RichMessageListSortView *_sortView;
    MCSafeBoolCache *_atLeastOneSelectedMessageIsInOutboxCache;
    MCSafeBoolCache *_atLeastOneSelectedMessageIsInDraftsCache;
    NSNumber *_uniqueID;
    BOOL _changingSplitViewOrientation;
    BOOL _initializedSearchDelay;
    double _performSearchDelay;
    NSAnimation *_barContainerViewAnimation;
    NSTimer *_timeMachineRestoreSheetTimer;
    BOOL _timeMachineRestoreIsInProgress;
    FullScreenWindowController *_fullScreenWindowController;
    MailboxesSplitViewController *_mailboxesSplitViewController;
    ContentSplitViewController *_contentSplitViewController;
    BOOL _ignoreSearchBarUpdates;
    BOOL _previouslyHadSentScope;
    TableViewManager *_tableManager;
    NSView *_viewingPaneContainerView;
    ViewingPaneViewController *_viewingPaneViewController;
    MailboxesOutlineViewController *_outlineViewController;
    MailSplitView *_contentSplitView;
    MessageListContainerView *_messageListContainerView;
    MailSplitView *_mailboxesSplitView;
    NSView *_viewerContainer;
    NSView *_mailboxesView;
    NSView *_mailboxesContainer;
    NSLayoutConstraint *_mailboxesWidthConstraint;
    ActivityViewController *_activityViewController;
    NSMenu *_tableHeaderMenu;
    NSMenu *_sortByTableHeaderMenu;
    MessageViewerLazyPopUpButton *_makeNewMailboxButton;
    MessageViewerLazyPopUpButton *_actionButton;
    MailBarContainerView *_mailBarContainerView;
    FavoritesBarView *_favoritesBarView;
    NSWindow *_timeMachineRestoreMessagesWindow;
    NSTextField *_timeMachineRestoreMessagesField;
    NSWindow *_timeMachineRestoreMailboxWindow;
    NSTextField *_timeMachineRestoreMailboxField;
}

+ (id)_messageViewersByUniqueID;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(id)arg3;
+ (id)newDefaultMessageViewer;
+ (void)clearDelayedWindowRestorations;
+ (void)_mailApplicationDidFinishLaunching:(id)arg1;
+ (void)restoreAllViewersFromDefaults;
+ (unsigned long long)deleteOperationForEvent:(id)arg1 isKeyPressed:(BOOL)arg2;
+ (id)_mailboxesForPaths:(id)arg1;
+ (void)searchForString:(id)arg1;
+ (id)frontmostMessageViewerWithOptions:(unsigned long long)arg1;
+ (id)mailboxesBeingViewed;
+ (void)showAllViewers;
+ (void)deregisterViewer:(id)arg1;
+ (void)_registerNewViewer:(id)arg1;
+ (id)existingViewerShowingMessage:(id)arg1;
+ (id)viewerForMailboxWithTag:(unsigned long long)arg1;
+ (id)mailboxForFavoritesBarPosition:(unsigned long long)arg1;
+ (id)existingViewerForMailbox:(id)arg1;
+ (id)allSingleMessageViewers;
+ (id)allMessageViewers;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
+ (id)messageViewerForUniqueID:(id)arg1;
+ (id)toolbarIdentifier;
@property(nonatomic) BOOL previouslyHadSentScope; // @synthesize previouslyHadSentScope=_previouslyHadSentScope;
@property(nonatomic) BOOL ignoreSearchBarUpdates; // @synthesize ignoreSearchBarUpdates=_ignoreSearchBarUpdates;
@property(nonatomic) NSTextField *timeMachineRestoreMailboxField; // @synthesize timeMachineRestoreMailboxField=_timeMachineRestoreMailboxField;
@property(retain, nonatomic) NSWindow *timeMachineRestoreMailboxWindow; // @synthesize timeMachineRestoreMailboxWindow=_timeMachineRestoreMailboxWindow;
@property(nonatomic) NSTextField *timeMachineRestoreMessagesField; // @synthesize timeMachineRestoreMessagesField=_timeMachineRestoreMessagesField;
@property(retain, nonatomic) NSWindow *timeMachineRestoreMessagesWindow; // @synthesize timeMachineRestoreMessagesWindow=_timeMachineRestoreMessagesWindow;
@property(nonatomic) FavoritesBarView *favoritesBarView; // @synthesize favoritesBarView=_favoritesBarView;
@property(nonatomic) MailBarContainerView *mailBarContainerView; // @synthesize mailBarContainerView=_mailBarContainerView;
@property(readonly) NSDictionary *savedAttributes; // @synthesize savedAttributes=_savedAttributes;
@property(nonatomic) MessageViewerLazyPopUpButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) MessageViewerLazyPopUpButton *makeNewMailboxButton; // @synthesize makeNewMailboxButton=_makeNewMailboxButton;
@property(nonatomic) NSMenu *sortByTableHeaderMenu; // @synthesize sortByTableHeaderMenu=_sortByTableHeaderMenu;
@property(retain, nonatomic) NSMenu *tableHeaderMenu; // @synthesize tableHeaderMenu=_tableHeaderMenu;
@property(retain, nonatomic) ActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(nonatomic) NSLayoutConstraint *mailboxesWidthConstraint; // @synthesize mailboxesWidthConstraint=_mailboxesWidthConstraint;
@property(nonatomic) NSView *mailboxesContainer; // @synthesize mailboxesContainer=_mailboxesContainer;
@property(retain, nonatomic) NSView *mailboxesView; // @synthesize mailboxesView=_mailboxesView;
@property(nonatomic) NSView *viewerContainer; // @synthesize viewerContainer=_viewerContainer;
@property(nonatomic) MailSplitView *mailboxesSplitView; // @synthesize mailboxesSplitView=_mailboxesSplitView;
@property(nonatomic) MessageListContainerView *messageListContainerView; // @synthesize messageListContainerView=_messageListContainerView;
@property(retain, nonatomic) MailSplitView *contentSplitView; // @synthesize contentSplitView=_contentSplitView;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) MailboxesOutlineViewController *outlineViewController; // @synthesize outlineViewController=_outlineViewController;
@property(retain, nonatomic) ViewingPaneViewController *viewingPaneViewController; // @synthesize viewingPaneViewController=_viewingPaneViewController;
@property(nonatomic) NSView *viewingPaneContainerView; // @synthesize viewingPaneContainerView=_viewingPaneContainerView;
@property(retain, nonatomic) TableViewManager *tableManager; // @synthesize tableManager=_tableManager;
- (void)_alwaysShowDuplicatesDidChange:(id)arg1;
- (void)window:(id)arg1 startCustomAnimationToExitFullScreenWithDuration:(double)arg2;
- (id)customWindowsToExitFullScreenForWindow:(id)arg1;
- (BOOL)usesCustomFullScreenAnimation;
- (BOOL)isModal;
- (BOOL)hasModalWindow;
- (void)_windowDidExitFullScreen:(id)arg1;
- (void)_windowWillExitFullScreen:(id)arg1;
- (void)windowDidFailToEnterFullScreen:(id)arg1;
- (void)_windowWillEnterFullScreen:(id)arg1;
- (void)initFullScreenController;
- (void)setFullScreenWindowController:(id)arg1;
@property(readonly) FullScreenWindowController *fullScreenWindowController;
- (void)attachModalWindowWithDelegate:(id)arg1;
- (void)willAttachModalWindowWithDelegate:(id)arg1;
- (void)closeModalWindowForcibly:(BOOL)arg1 animate:(BOOL)arg2 animationType:(long long)arg3;
- (void)closeModalWindowForcibly:(BOOL)arg1 animate:(BOOL)arg2;
- (void)presentModalWindowWithDelegate:(id)arg1;
- (BOOL)isFullScreen;
- (void)animationDidStop:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)_animationDidEndOrStop:(id)arg1;
- (BOOL)animationShouldStart:(id)arg1;
- (void)animation:(id)arg1 didReachProgressMark:(float)arg2;
@property(readonly) struct CGRect nonToolbarWindowContentRect;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)toggleShowBarContainer:(id)arg1;
- (void)setWithoutAnimationBarContainerVisibility:(BOOL)arg1 forFullScreen:(BOOL)arg2;
- (void)_createUniqueID;
- (void)_updateSearchItemLabel;
- (id)undoManagerForMessageTransfer:(id)arg1;
- (void)messageTransferDidUndoTransferOfMessages:(id)arg1;
- (void)messageTransferDidTransferMessages:(id)arg1;
- (void)unhideMessagesForMessageTransfer:(id)arg1;
- (void)hideMessagesForMessageTransfer:(id)arg1;
- (void)transfer:(id)arg1 didCompleteWithError:(id)arg2;
- (void)_reportError:(id)arg1;
- (id)_selectedLabels;
- (BOOL)transferMessages:(id)arg1 toMailbox:(id)arg2 deleteOriginals:(BOOL)arg3 allowUndo:(BOOL)arg4 isDeleteOperation:(BOOL)arg5 isArchiveOperation:(BOOL)arg6;
- (void)_synchronouslyMarkAsNotJunkMail:(id)arg1 inStores:(id)arg2;
- (void)_markMessagesAsNotJunkMail:(id)arg1 stores:(id)arg2;
- (void)markAsNotJunkMail:(id)arg1;
- (void)_undoMarkMessagesAsJunkMail:(id)arg1 stores:(id)arg2;
- (void)_synchronouslyMarkAsJunkMail:(id)arg1 inStores:(id)arg2 delete:(BOOL)arg3;
- (void)_deleteJunkedMessages:(id)arg1 inStores:(id)arg2 moveToTrash:(BOOL)arg3;
- (void)_markMessagesAsJunkMail:(id)arg1 stores:(id)arg2;
- (void)markAsJunkMail:(id)arg1;
- (id)searchFieldWidenScopeMenuSpinnerTitleString:(id)arg1;
- (id)searchFieldWidenScopeMenuItemTitleString:(id)arg1;
- (id)searchFieldWidenScopeMenuTitleString:(id)arg1;
- (void)searchFieldWidenQueryScope:(id)arg1;
- (BOOL)searchField:(id)arg1 hasResultsForQuery:(id)arg2;
- (BOOL)searchFieldUsesRestrictedQueryScope:(id)arg1;
- (void)addSenderToContacts:(id)arg1;
- (void)reapplySortingRules:(id)arg1;
- (void)saveSearch:(id)arg1;
- (void)searchScopeChanged:(id)arg1;
- (void)searchScopeWillChange;
- (BOOL)_hasSentScope;
- (void)performSearch:(id)arg1;
- (void)_updateSearchUIForSender:(id)arg1;
- (void)searchDidUpdate;
- (void)searchDidFinish;
- (void)searchWillStart;
- (void)clearUndoRedoStacksUnconditionally:(BOOL)arg1;
- (void)_updateSearchStatusWithDelay;
- (void)_reallyAnimateProgressInidicator;
@property(copy, nonatomic) NSSet *initiallySelectedMessages;
- (void)filterMessagesToMoveOrDelete:(id)arg1;
- (BOOL)archiveMessages:(id)arg1 allowUndo:(BOOL)arg2;
- (BOOL)deleteMessages:(id)arg1 allowMoveToTrash:(BOOL)arg2 allowUndo:(BOOL)arg3;
- (BOOL)transferSelectedMessagesToMailbox:(id)arg1 deleteOriginals:(BOOL)arg2;
- (void)messageDragDidEnd;
- (void)ensureMailboxesPaneIsVisible:(id)arg1;
- (void)messageDragMovedTo:(struct CGPoint)arg1;
- (void)messageDragWillStartWithEvent:(id)arg1;
- (void)messageWasDoubleClicked:(id)arg1;
- (void)actionMessageDidChangeInConversationView;
- (void)selectedMessagesDidChangeInMessageList;
- (void)refreshViewingPaneSelection;
- (void)messagesWereSelected:(id)arg1 fromTableViewManager:(id)arg2;
- (void)_updateMallboxes:(id)arg1;
- (id)_columnOrDetailMenuItemTitle;
- (void)_reallyUpdateWindowTitle:(id)arg1;
- (void)_updateWindowTitle:(id)arg1;
- (void)_mailboxDisplayCountChanged:(id)arg1;
- (id)_countStringForType:(BOOL)arg1 isDrafts:(BOOL)arg2 omitUnread:(BOOL)arg3 totalCount:(unsigned long long *)arg4;
- (void)saveDefaultWindowState;
- (void)saveDefaultViewerState;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)_restoreFromDefaultWindowStateDictionary:(id)arg1;
- (id)_defaultWindowStateDictionary;
- (void)_setupFromAttributes;
- (void)_findSomeDefaultsIfNecessary;
- (id)dictionaryRepresentation;
- (void)toggleSizeColumn:(id)arg1;
- (void)toggleAuthorColumn:(id)arg1;
- (void)toggleLocationColumn:(id)arg1;
- (void)toggleDateReceivedColumn:(id)arg1;
- (void)toggleDateSentColumn:(id)arg1;
- (void)toggleToColumn:(id)arg1;
- (void)toggleFromColumn:(id)arg1;
- (void)toggleMessageFlagsColumn:(id)arg1;
- (void)toggleMessageNumbersColumn:(id)arg1;
- (void)toggleContentsColumn:(id)arg1;
- (void)hideDeletions:(id)arg1;
- (void)showDeletions:(id)arg1;
- (void)selectNextInThread:(id)arg1;
- (void)selectPreviousInThread:(id)arg1;
- (void)selectThread:(id)arg1;
- (BOOL)shouldShowThreadControlForMessage:(id)arg1 isSelectedRow:(BOOL)arg2;
- (void)toggleViewRelatedMessages:(id)arg1;
- (void)toggleThreadedMode:(id)arg1;
- (void)closeAllThreads:(id)arg1;
- (void)openAllThreads:(id)arg1;
- (void)unfocus:(id)arg1;
- (void)focus:(id)arg1;
- (void)toggleInboxOnly:(id)arg1;
- (void)toggleAscendingSort:(id)arg1;
- (void)sortByTagOfSender:(id)arg1;
- (void)removeAttachments:(id)arg1;
- (void)_removeAttachmentsFromMessages:(id)arg1 fromStores:(id)arg2;
- (void)_handleAttachmentsRemovedFromMessages:(id)arg1 newMessages:(id)arg2;
- (int)searchTarget;
- (long long)_searchField;
- (void)_setupSearchParametersForTag:(long long)arg1;
- (void)clearSearch:(id)arg1;
- (void)_clearSearchByAnimating:(BOOL)arg1;
- (void)_updateSearchStatus;
@property(copy, nonatomic) NSString *searchPhrase;
- (void)startSearchForSuggestions:(id)arg1;
- (id)suggestionsGenius;
- (void)_searchForSuggestions:(id)arg1;
- (void)_searchForString:(id)arg1;
- (void)_hideSearchResultsInSearchView;
- (void)_showSearchResultsInSearchView;
- (BOOL)_canSearchSelectedMailboxes;
- (BOOL)_canSaveSearchWithTarget:(int)arg1;
- (unsigned long long)_searchResultCount;
@property(readonly, nonatomic) BOOL isShowingSearchResults;
- (void)searchIndex:(id)arg1;
- (id)mailboxSearchCriterionForScope:(int)arg1 containsSentMailbox:(char *)arg2 containsTrashMailbox:(char *)arg3 shouldExcludeJunk:(char *)arg4;
- (id)_criterionForMailbox:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)jumpToSelection:(id)arg1;
- (void)quickLookSelectedAttachments:(id)arg1;
- (void)saveAllAttachments:(id)arg1;
- (void)saveAs:(id)arg1;
- (BOOL)send:(id)arg1;
- (BOOL)_sendMessages:(id)arg1 forDraft:(BOOL)arg2;
- (BOOL)send:(id)arg1 forDraft:(BOOL)arg2 actualMessage:(id)arg3;
- (void)exportAsPDF:(id)arg1;
- (void)showPrintPanel:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2;
- (void)stopSpeaking:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (void)paste:(id)arg1;
- (void)_pasteData:(id)arg1 pasteboardType:(id)arg2 alternateData:(id)arg3 alternateType:(id)arg4 destination:(id)arg5;
- (long long)_pasteMessages:(id)arg1 unsuccessfulMessages:(id)arg2 flagsToSet:(id)arg3 destinationAccount:(id)arg4 destinationStore:(id)arg5;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)_doCopy:(id)arg1 deleteWhenCopied:(BOOL)arg2;
- (void)_showActivityProgressPanelForCopy:(id)arg1;
- (void)_copyMessagesToPasteboard:(id)arg1 deleteWhenCopied:(BOOL)arg2 pasteboardType:(id)arg3 alternateType:(id)arg4;
- (void)_putMessageDataOntoPasteboard:(id)arg1 attributedString:(id)arg2 shouldDelete:(id)arg3 pasteboardType:(id)arg4;
- (void)rebuildTableOfContents:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)clearFlaggedStatus:(id)arg1;
- (void)toggleFlag:(id)arg1;
- (void)markAsUnreadFromToolbar:(id)arg1;
- (void)markAsReadFromToolbar:(id)arg1;
- (void)markAsUnread:(id)arg1;
- (void)markAsRead:(id)arg1;
- (void)performTextFinderAction:(id)arg1;
- (void)markMessagesAsViewed:(id)arg1;
- (void)markMessageAsViewed:(id)arg1;
- (void)modifyFlaggedStatus:(id)arg1;
- (void)clearFlaggedStatusForMessageListSelection:(BOOL)arg1;
- (void)clearFlaggedStatus;
- (id)_flaggedStatusForMessages:(id)arg1;
- (void)_setFlaggedStatus:(id)arg1 withUndoActionName:(id)arg2;
- (id)_messagesWithoutFlagColor:(BOOL)arg1 fromMessages:(id)arg2;
- (void)toggleFlaggedStatus:(BOOL)arg1 forMessageListSelection:(BOOL)arg2;
- (void)toggleFlaggedStatus:(BOOL)arg1;
- (void)toggleFlaggedStatusInFullScreen:(id)arg1;
- (id)appliedFlagColorsForSelectedMessages;
- (void)_changeFlag:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3 undoActionName:(id)arg4;
- (id)_selectedMessagesWhoseFlag:(unsigned int)arg1 isEqualToState:(BOOL)arg2 action:(SEL)arg3;
- (void)copyMessagesToMailbox:(id)arg1;
- (void)moveMessagesToMailbox:(id)arg1;
- (void)_moveOrCopyMessagesToMailbox:(id)arg1 deleteOriginals:(BOOL)arg2;
- (void)renameMailbox:(id)arg1;
- (id)_displaySelectedMessageInSeparateWindow:(id)arg1 withModifiers:(unsigned long long)arg2;
- (id)_documentsToDisplaySelectedMessagesInSeperateWindowWithModifiers:(unsigned long long)arg1;
- (id)displaySelectedMessageInSeparateWindow:(id)arg1;
- (void)forwardWithParentAsAttachment:(id)arg1;
- (void)forwardAsAttachment:(id)arg1;
- (void)forwardMessage:(id)arg1;
- (void)redirectMessage:(id)arg1;
- (BOOL)showEditorWithType:(unsigned long long)arg1 forSelectedMessages:(id)arg2 settings:(id)arg3 completionHandler:(id)arg4;
- (void)_showComposeWindowWithType:(unsigned long long)arg1;
- (void)showAccountInfo:(id)arg1;
- (void)focusMessage;
- (void)focusMailboxes;
- (void)focusMessages;
- (void)selectAllMessages;
- (void)_openMessages:(id)arg1 withModifiers:(unsigned long long)arg2;
- (void)openMessages:(id)arg1;
- (void)archiveMessages:(id)arg1;
- (void)deleteMessages:(id)arg1 allowingMoveToTrash:(BOOL)arg2;
- (void)deleteMessages:(id)arg1;
- (void)undeleteMessages:(id)arg1;
- (void)showAddressPanel:(id)arg1;
- (void)showComposeWindow:(id)arg1;
- (void)replyToOriginalSender:(id)arg1;
- (void)replyAllMessage:(id)arg1;
- (void)replyMessage:(id)arg1;
- (void)checkNewMail:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)smartMailboxMemberMessagesForMessages:(id)arg1;
- (BOOL)shouldDeleteMessagesGivenCurrentState;
- (BOOL)_updatedAtLeastOneSelectedMessageIsInDrafts:(id)arg1;
- (BOOL)atLeastOneSelectedMessageIsInDrafts:(id)arg1;
- (BOOL)_updatedAtLeastOneSelectedMessageIsInOutbox:(id)arg1;
- (BOOL)atLeastOneSelectedMessageIsInOutbox:(id)arg1;
- (BOOL)_messagesContainMessagesWithAttachments:(id)arg1;
- (BOOL)_messages:(id)arg1 containMessagesWithJunkMailLevelEqualTo:(long long)arg2;
- (BOOL)_messages:(id)arg1 containMessagesWithFlaggedStatusEqualTo:(BOOL)arg2;
- (long long)_messages:(id)arg1 stateForFlagColor:(BOOL)arg2;
- (BOOL)_messages:(id)arg1 containMessagesWithReadStatusEqualTo:(BOOL)arg2;
- (void)_setMailboxes:(id)arg1;
- (void)smartMailboxCriteriaChanged:(id)arg1;
- (void)_selectNextMessage:(id)arg1;
- (void)_mailboxesDidChange:(id)arg1;
- (void)_accountsDidChange:(id)arg1;
- (void)_mallStructureDidChange:(id)arg1;
- (void)_mallDidOpen:(id)arg1;
- (BOOL)messageViewerIsFinishedLoadingMessages;
- (void)_updateUnreadCountQueries:(id)arg1;
- (void)mailboxSelectionChanged:(id)arg1;
- (void)_mailboxWasRenamed:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (double)previewSplitPercentage;
- (void)selectMailbox:(id)arg1;
- (void)_moveMessagesToFavoriteWithMailbox:(id)arg1 andPosition:(unsigned long long)arg2;
- (void)_animateMessageSelectionToFavoriteButtonAtPosition:(long long)arg1 withCount:(unsigned long long)arg2 image:(id)arg3 fromPosition:(struct CGPoint)arg4;
- (void)outlineViewDoubleClick:(id)arg1;
- (id)messageThatUserIsProbablyReading;
- (id)currentDisplayedMessage;
- (id)messagesIncludingHiddenCopies:(id)arg1;
- (void)hideAllCopiesOfMessages:(id)arg1;
- (void)showAllCopiesOfMessage:(id)arg1;
- (id)messageIDsToShowAllCopiesOf;
- (id)messageSelectionForPrinting;
- (id)messageSelection;
- (id)messagesTargetedByAction:(SEL)arg1;
- (void)_firstResponderIsViewingPane:(char *)arg1 isMessageList:(char *)arg2;
- (BOOL)outgoingMailboxSelected;
- (void)setSelectedMessages:(id)arg1;
- (id)selectedMessages;
- (void)setSelectedMailboxes:(id)arg1 scrollToVisible:(BOOL)arg2;
- (void)setSelectedMailboxes:(id)arg1;
- (void)didCloseContextMenu:(id)arg1;
- (void)willShowContextMenu:(id)arg1;
- (id)mailboxSelectionWindow;
- (void)revealMailbox:(id)arg1;
- (id)sortedSectionItemsForTimeMachine;
- (id)expandedItems;
- (BOOL)sectionIsExpanded:(id)arg1;
- (BOOL)mailboxIsExpanded:(id)arg1;
- (void)selectPathsToMailboxes:(id)arg1;
- (BOOL)isSelectedMailboxSpecial;
- (id)selectedMailbox;
- (id)selectedMailbox:(BOOL)arg1;
- (id)expandedSelectedMailboxesAllowingSearch;
- (id)expandedSelectedMailboxes;
- (id)selectedMailboxes;
- (void)_setAutorecalculatesContentBorderThickness:(BOOL)arg1;
- (void)_timeMachineRestoreFinished:(id)arg1;
- (void)_beginTimeMachineRestoreSheetIsForMailbox:(id)arg1;
- (void)_displayTimeMachineRestoreSheet:(id)arg1;
- (void)prepareForTimeMachineRestore;
@property(retain, nonatomic) ContentSplitViewController *contentSplitViewController;
@property(retain, nonatomic) MailboxesSplitViewController *mailboxesSplitViewController;
- (BOOL)_shouldUseLayoutContraintsForWindow:(id)arg1;
- (struct CGSize)_minimumPreviewPaneSize;
- (struct CGSize)_minimumMessageListSize;
- (struct CGSize)minimumContentSize;
- (double)_sidebarAnimationDuration;
- (void)toggleMailboxesPane:(id)arg1;
- (void)_disableSplitViewAutosaving;
- (void)_enableSplitViewAutosaving;
- (void)_viewerLayoutPreferenceChanged:(id)arg1;
- (BOOL)_mailboxesPaneIsOpenWideEnoughToUse;
- (void)setMailboxesPaneIsOpen:(BOOL)arg1;
- (BOOL)mailboxesPaneIsOpen;
- (double)mailboxesPaneWidth;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)windowWillMiniaturize:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)resignAsSelectionOwner;
- (void)takeOverAsSelectionOwner;
- (void)_setUpMenus;
- (void)_setupMailboxOutlineView;
- (void)_setUpWindowContents;
- (id)messageListSortMenu;
- (id)tableHeaderViewGetDefaultMenu:(id)arg1;
- (void)_setupUIAndOrderFront:(BOOL)arg1 andMakeKey:(BOOL)arg2;
- (void)_updateWindowMinimumSize;
- (struct CGImage *)newMessageViewerSnapshotForceNonFullScreen:(BOOL)arg1;
- (void)showAndMakeKey:(BOOL)arg1;
- (void)show;
- (BOOL)_isShowingMessage:(id)arg1;
- (BOOL)_isViewingMailbox:(id)arg1;
- (BOOL)_selectedMailboxesAreOutgoing:(char *)arg1;
- (void)_setStore:(id)arg1;
- (void)storeBeingInvalidated:(id)arg1;
- (void)_unregisterForStoreNotifications;
- (void)_registerForStoreNotifications;
- (void)_unregisterForApplicationNotifications;
- (void)_registerForApplicationNotifications;
- (void)dealloc;
- (void)_messageViewerCommonInit;
- (id)initWithMailboxes:(id)arg1;
- (id)initPlain;
- (id)init;
- (void)intializeLazyPopUpButtons;
- (id)initWithAttributes:(id)arg1;
- (void)awakeFromNib;
- (id)_mailboxesFromAttributes:(id)arg1;
- (void)showFollowupsToMessage:(id)arg1;
- (void)_cantFindFollowupToMessage:(id)arg1;
- (void)_displayFollowup:(id)arg1;
- (void)showCurrentMessageInMailbox;
- (void)revealMessage:(id)arg1 inMailbox:(id)arg2 forceMailboxSelection:(BOOL)arg3;
- (long long)viewerNumber;
- (void)setScriptingProperties:(id)arg1;
- (id)junkMailbox;
- (id)trashMailbox;
- (id)sentMailbox;
- (id)draftsMailbox;
- (id)outbox;
- (id)inbox;
- (void)setVisibleColumns:(id)arg1;
- (id)visibleColumns;
- (BOOL)previewPaneVisible;
- (void)setIsSortedAscending:(BOOL)arg1;
- (BOOL)isSortedAscending;
- (void)setAppleScriptSortColumn:(unsigned int)arg1;
- (unsigned int)appleScriptSortColumn;
- (void)setFocusedMessages:(id)arg1;
- (id)focusedMessages;
- (id)allMessages;
- (id)objectSpecifier;
- (id)uniqueID;
- (void)submenuAction:(id)arg1;
- (void)_synchronizeFullScreenFlagToolbarItem:(id)arg1;
- (void)finishedSettingFlaggedStatus;
- (void)searchFieldDidEndSearching:(id)arg1;
- (void)ensureSearchFieldVisibilityInToolbar;
- (void)_ensureItemVisibilityInToolbar:(long long)arg1 identifier:(id)arg2;
- (void)toolbarDidReorderItem:(id)arg1;
- (void)toolbarDidRemoveItem:(id)arg1;
- (void)toolbarWillAddItem:(id)arg1;
- (void)updateToolbar;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (void)setupSuggestionsSearchFieldForSentMailboxIfNecessary;
- (void)setupSuggestionsSearchField;
- (void)_setPrioritySuggestionsWithHighPriority:(BOOL)arg1 withLowPriority:(BOOL)arg2;
- (void)_updateSuggestionsMailboxesListAndFlagNames;
- (void)_asyncUpdateSuggestionsMailboxesListAndFlagNames:(id)arg1;
- (long long)_getLowPriorityResultCount;
- (long long)_getHighPriorityResultCount;
- (void)_setupPrioritySuggestions:(id)arg1;
- (void)_updateSuggestionsFlagNames;
- (void)_asyncUpdateSuggestionsFlagNames:(id)arg1;
- (void)configureSegmentedItem:(id)arg1 withDictionary:(id)arg2 forSegment:(long long)arg3;
- (BOOL)validateFlaggedStatusToolbarItem:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (id)toolbarConfigurationDict;
- (void)clearToolbarItemsTarget;
- (void)setupToolbar;

@end

